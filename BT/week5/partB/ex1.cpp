bool majority (bool b1, bool b2, bool b3)
{
    switch (b1)
    {
    case true:
        switch (b2)
        {
        case true:
            return true;
        case false:
            switch (b3)
            {
            case true:
                return true;
            case false:
                return false;
            }
        }
    case false:
            switch(b2)
            {
            case true:
                switch(b3)
                {
                case true:
                    return true;
                case false:
                    return false;
                }
            case false:
                return false;
            }
    }
}