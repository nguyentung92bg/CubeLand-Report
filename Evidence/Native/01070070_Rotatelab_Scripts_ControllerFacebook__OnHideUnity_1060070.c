/* IL2CPP: Rotatelab.Scripts.ControllerFacebook$$OnHideUnity
void Rotatelab_Scripts_ControllerFacebook__OnHideUnity (Rotatelab_Scripts_ControllerFacebook_o* __this, bool isGameShown, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFacebook$$OnHideUnity
   void Rotatelab_Scripts_ControllerFacebook__OnHideUnity (Rotatelab_Scripts_ControllerFacebook_o*
   __this, bool isGameShown, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFacebook__OnHideUnity_1060070(undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  uVar1 = _UNK_0107008c;
  if (param_2 != 0) {
    uVar1 = 0x3f800000;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_03620c14 + 0x3620be8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03620c18 + 0x3620bf8);
    *(code **)(_UNK_03620c1c + 0x3620c08) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x03620c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

