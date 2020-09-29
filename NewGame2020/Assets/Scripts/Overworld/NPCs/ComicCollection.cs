using UnityEngine;

public class ComicCollection : MonoBehaviour
{
    public Sprite[] panels;
    
    public int getSize()
    {
        return panels.Length;
    }

    /**
    * Return the index-th Sprite in the list of panels if the index
    * is within bounds
    */
    public Sprite getPanel(int index)
    {
        Sprite ret = null;
        if(index >= 0 && index < panels.Length)
        {
            ret = panels[index];
        }

        return ret;
    }
}
