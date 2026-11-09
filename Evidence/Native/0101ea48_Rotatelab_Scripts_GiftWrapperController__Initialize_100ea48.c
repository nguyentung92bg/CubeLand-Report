/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$Initialize
void Rotatelab_Scripts_GiftWrapperController__Initialize (Rotatelab_Scripts_GiftWrapperController_o* __this, Rotatelab_GiftWrapperData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$Initialize
   void Rotatelab_Scripts_GiftWrapperController__Initialize
   (Rotatelab_Scripts_GiftWrapperController_o* __this, Rotatelab_GiftWrapperData_o* data, const
   MethodInfo* method); */

void Rotatelab_Scripts_GiftWrapperController__Initialize_100ea48(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_0101ebfc + 0x101ea64);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ec00 + 0x101ea78));
    *pcVar4 = '\x01';
  }
  *(int *)(param_1 + 0x10) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x10),param_2);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_HpTextData__get_Rotation_1070db8(&uStack_34,*(int *)(iVar5 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetLocalPositionAndRotation_3615d88
            (iVar1,uVar2,uVar3,uVar6,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(float *)(param_2 + 0x14) + *(float *)(param_2 + 0x14) + _UNK_0101ebf8,
             *(float *)(param_2 + 0x18) + *(float *)(param_2 + 0x18) + _UNK_0101ebf8,
             *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x1c) + _UNK_0101ebf8,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101ec04 + 0x101ebbc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__AddToGrid_1106f50(iVar1,param_1,*(undefined4 *)(param_2 + 0x24),0);
  Rotatelab_Scripts_GiftWrapperController__UpdateHpTexts_100ec08(param_1);
  return;
}

