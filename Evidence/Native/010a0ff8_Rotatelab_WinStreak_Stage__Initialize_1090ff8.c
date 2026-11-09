/* IL2CPP: Rotatelab.WinStreak.Stage$$Initialize
void Rotatelab_WinStreak_Stage__Initialize (Rotatelab_WinStreak_Stage_o* __this, Rotatelab_WinStreak_WinStreakSo_StageData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Stage$$Initialize
   void Rotatelab_WinStreak_Stage__Initialize (Rotatelab_WinStreak_Stage_o* __this,
   Rotatelab_WinStreak_WinStreakSo_StageData_o* data, const MethodInfo* method); */

void Rotatelab_WinStreak_Stage__Initialize_1090ff8(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint in_fpscr;
  
  pcVar2 = (char *)(_UNK_010a11ec + 0x10a1010);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a11f0 + 0x10a1024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a11f4 + 0x10a1030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a11f8 + 0x10a103c));
    *pcVar2 = '\x01';
  }
  piVar5 = (int *)(param_1 + 0x40);
  *piVar5 = param_2;
  thunk_FUN_00ec5080(piVar5,param_2);
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_WinStreak_Chest__Initialize_1090030(*(int *)(param_1 + 0x34),param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = Rotatelab_WinStreak_Stage__get_FirstLevel_1090f60(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_UI_Slider__set_minValue_39c2514(iVar3,uVar1,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x40) + 8),
                              (byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_UI_Slider__set_maxValue_39c25a4(*(int *)(param_1 + 0x10),uVar1,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x40) + 8),
                              (byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34
            (*(int *)(param_1 + 0x30),**(undefined4 **)(_UNK_010a11fc + 0x10a1120),uVar1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038
            (*(int *)(param_1 + 0x38),*(char *)(param_2 + 0xc) != '\0',0);
  iVar3 = Rotatelab_WinStreak_Stage__get_FirstLevel_1090f60(param_1);
  piVar6 = *(int **)(_UNK_010a1200 + 0x10a117c);
  puVar7 = *(undefined4 **)(_UNK_010a1204 + 0x10a1184);
  while( true ) {
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*piVar5 + 8) <= iVar3) break;
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__Instantiate_object__14d4e4c(uVar1,uVar4,0,*puVar7);
    UnityEngine_Object__Instantiate_object__14d4e4c
              (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),0,*puVar7);
    iVar3 = iVar3 + 1;
  }
  return;
}

