static const char *menu_msg="                         Amiga emulator "
#ifdef DREAMCAST
 "for Dreamcast "
#else 
#ifdef DINGOO
 "for Dingoo "
#endif
#endif
#if defined(GCW0) || defined (RS97)
 "by Chui - based on UAE 0.8.22. GCW Zero port by Nebuleon and Zear. UAE4ALL logo and minor gfx changes by Hi-Ban. Release 1-params.";
#else
 "by Chui.                    Third release Candidate.                               GPL License.                                          ";
#endif

#define MAX_SCROLL_MSG (-1500)
