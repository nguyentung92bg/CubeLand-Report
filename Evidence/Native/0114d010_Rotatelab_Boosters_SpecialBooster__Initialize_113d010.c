/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$Initialize
void Rotatelab_Boosters_SpecialBooster__Initialize (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03731dc8) */
/* WARNING: Removing unreachable block (ram,0x03731dd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$Initialize
   void Rotatelab_Boosters_SpecialBooster__Initialize (Rotatelab_Boosters_SpecialBooster_o* __this,
   const MethodInfo* method); */

void Rotatelab_Boosters_SpecialBooster__Initialize_113d010(int param_1)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int *piVar2;
  undefined4 unaff_r5;
  char *pcVar3;
  uint in_fpscr;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_0114d088 + 0x114d024);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d08c + 0x114d038));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114d090 + 0x114d04c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
  Rotatelab_Scripts_BulletFlowTracker__Init_ff9c54(iVar1,uVar4,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_fillAmount_3721d6c
            (*(int *)(param_1 + 0x18),0,0,extraout_r3,unaff_r4,unaff_r5);
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

