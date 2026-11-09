/* IL2CPP: Rotatelab.Scripts.ShieldController$$Initialize
void Rotatelab_Scripts_ShieldController__Initialize (Rotatelab_Scripts_ShieldController_o* __this, Rotatelab_ShieldData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShieldController$$Initialize
   void Rotatelab_Scripts_ShieldController__Initialize (Rotatelab_Scripts_ShieldController_o*
   __this, Rotatelab_ShieldData_o* data, const MethodInfo* method); */

void Rotatelab_Scripts_ShieldController__Initialize_10506c4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01060840 + 0x10606e0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060844 + 0x10606f4));
    *pcVar4 = '\x01';
  }
  *(int *)(param_1 + 0x10) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x10),param_2);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Renderer__get_material_35c59b0(*(int *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  thunk_FUN_00ec5080();
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar5 = *(int *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
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
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetLocalPositionAndRotation_3615d88
            (iVar2,uVar6,uVar1,uVar3,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  Rotatelab_Scripts_ShieldController__UpdateHealthText_105084c(param_1);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01060848 + 0x106080c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__AddToGrid_1106f50(iVar2,param_1,*(undefined4 *)(param_2 + 0x28),0);
  return;
}

