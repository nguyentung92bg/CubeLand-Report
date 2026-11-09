/* IL2CPP: Rotatelab.Scripts.ScrewController$$UpdateColor
void Rotatelab_Scripts_ScrewController__UpdateColor (Rotatelab_Scripts_ScrewController_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScrewController$$UpdateColor
   void Rotatelab_Scripts_ScrewController__UpdateColor (Rotatelab_Scripts_ScrewController_o* __this,
   int32_t colorType, const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__UpdateColor_104fef8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01060134 + 0x105ff14);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060138 + 0x105ff28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106013c + 0x105ff34));
    *pcVar3 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__UpdateColor_ff596c(param_1,param_2,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Renderer__get_material_35c59b0(*(int *)(param_1 + 0x38),0);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01060140 + 0x105ff78));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterColorDataSo__GetColorByType_ff4c04(&uStack_34,iVar2,param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__set_color_35c7c80(iVar1,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Renderer__get_material_35c59b0(*(int *)(param_1 + 0x38),0);
  piVar4 = *(int **)(_UNK_01060144 + 0x105fffc);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01060148 + 0x1060020));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterColorDataSo__GetShadowColorByType_ff4c7c(&uStack_34,iVar2,param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c(iVar1,uVar5,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Renderer__get_material_35c59b0(*(int *)(param_1 + 0x38),0);
  uVar5 = *(undefined4 *)(*(int *)(**(int **)(_UNK_0106014c + 0x10600b4) + 0x5c) + 0x18);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01060150 + 0x10600c4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterColorDataSo__GetSpecularColorByType_ff4cb0(&uStack_34,iVar2,param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c(iVar1,uVar5,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  return;
}

