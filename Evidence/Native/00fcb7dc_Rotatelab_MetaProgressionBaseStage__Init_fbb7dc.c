/* IL2CPP: Rotatelab.MetaProgressionBaseStage$$Init
void Rotatelab_MetaProgressionBaseStage__Init (Rotatelab_MetaProgressionBaseStage_o* __this, MetaProgressionSo_MetaProgressData_o* data, int32_t dividerCount, int32_t stageIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionBaseStage$$Init
   void Rotatelab_MetaProgressionBaseStage__Init (Rotatelab_MetaProgressionBaseStage_o* __this,
   MetaProgressionSo_MetaProgressData_o* data, int32_t dividerCount, int32_t stageIndex, const
   MethodInfo* method); */

void Rotatelab_MetaProgressionBaseStage__Init_fbb7dc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  uint in_fpscr;
  
  pcVar3 = (char *)(_UNK_00fcb8d0 + 0xfcb7f8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb8d4 + 0xfcb80c));
    *pcVar3 = '\x01';
  }
  uVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                    (param_1,**(undefined4 **)(_UNK_00fcb8d8 + 0xfcb820));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(*(int *)(param_2 + 8) - param_3,(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_UI_Slider__set_minValue_39c2514(*(int *)(param_1 + 0x14),uVar1,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(*(undefined4 *)(param_2 + 8),(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_UI_Slider__set_maxValue_39c25a4(*(int *)(param_1 + 0x14),uVar1,0);
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00fcb8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x238))(piVar2,piVar2[0x30],*(undefined4 *)(*piVar2 + 0x23c));
  return;
}

