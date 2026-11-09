/* IL2CPP: Rotatelab.FX.AboveUiOverlayRenderer$$Begin
void Rotatelab_FX_AboveUiOverlayRenderer__Begin (Rotatelab_FX_AboveUiOverlayRenderer_o* __this, UnityEngine_GameObject_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.AboveUiOverlayRenderer$$Begin
   void Rotatelab_FX_AboveUiOverlayRenderer__Begin (Rotatelab_FX_AboveUiOverlayRenderer_o* __this,
   UnityEngine_GameObject_o* target, const MethodInfo* method); */

void Rotatelab_FX_AboveUiOverlayRenderer__Begin_10fbd68(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  pcVar8 = (char *)(_UNK_0110c02c + 0x110bd88);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c030 + 0x110bd9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c034 + 0x110bda8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c038 + 0x110bdb4));
    *pcVar8 = '\x01';
  }
  Rotatelab_FX_AboveUiOverlayRenderer__End_10fc048(param_1);
  *(int *)(param_1 + 0x20) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x20),param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_GameObject__get_layer_3601e60(param_2,0);
  puVar9 = *(undefined4 **)(_UNK_0110c03c + 0x110bdfc);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = UnityEngine_LayerMask__NameToLayer_3602cd0(*puVar9,0);
  if (*(int *)(**(int **)(_UNK_0110c040 + 0x110be1c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetLayerRecursively_fc27c4(param_2,uVar1,0);
  uVar1 = UnityEngine_Screen__get_width_35bd080(0);
  uVar2 = UnityEngine_Screen__get_height_35bd0c4(0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110c044 + 0x110be60));
  UnityEngine_RenderTexture___ctor_35e1ac8(uVar3,uVar1,uVar2,0x10,0,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar3);
  iVar6 = *(int *)(param_1 + 0x10);
  uVar1 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__CopyFrom_35af974(iVar6,uVar1,0);
  iVar6 = *(int *)(param_1 + 0x10);
  uVar4 = UnityEngine_LayerMask__NameToLayer_3602cd0(*puVar9,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__set_cullingMask_35acb34(iVar6,1 << (uVar4 & 0x1f),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__set_clearFlags_35ad11c(*(int *)(param_1 + 0x10),2,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__set_backgroundColor_35acf20(*(int *)(param_1 + 0x10),0,0,0,0,0);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar5 = (float)UnityEngine_Camera__get_depth_35ac678(iVar6,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__set_depth_35ac764(iVar7,fVar5 + -1.0,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__set_targetTexture_35adc00
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x10),1,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_RawImage__set_texture_39b6be0
            (*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(iRam0360d868 + 0x360d7f4);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360d86c + 0x360d808),1,0);
    *pcVar8 = '\x01';
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam0360d870 + 0x360d834);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam0360d874 + 0x360d844);
      *(code **)(iRam0360d878 + 0x360d854) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x0360d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar6,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

