/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$ResetProgress
void Rotatelab_Boosters_SpecialBooster__ResetProgress (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03731dc8) */
/* WARNING: Removing unreachable block (ram,0x03731dd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$ResetProgress
   void Rotatelab_Boosters_SpecialBooster__ResetProgress (Rotatelab_Boosters_SpecialBooster_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_SpecialBooster__ResetProgress_113d8a0(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_fillAmount_3721d6c(*(int *)(param_1 + 0x18),0,0);
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
    pcVar3 = (char *)(_UNK_03731e0c + 0x3731d88);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),0,0);
      *pcVar3 = '\x01';
    }
    iVar1 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                      (piVar2 + 0x25,0,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x1a0))(piVar2,*(undefined4 *)(*piVar2 + 0x1a4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

