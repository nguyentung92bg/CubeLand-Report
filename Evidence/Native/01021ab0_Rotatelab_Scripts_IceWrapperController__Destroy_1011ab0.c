/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$Destroy
void Rotatelab_Scripts_IceWrapperController__Destroy (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$Destroy
   void Rotatelab_Scripts_IceWrapperController__Destroy (Rotatelab_Scripts_IceWrapperController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__Destroy_1011ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01021d60 + 0x1021ac8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021d64 + 0x1021adc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021d68 + 0x1021ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021d6c + 0x1021af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021d70 + 0x1021b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021d74 + 0x1021b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021d78 + 0x1021b18));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01021d7c + 0x1021b34));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__RemoveFromGrid_1107024
            (iVar1,param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28),0);
  if (*(int *)(**(int **)(_UNK_01021d80 + 0x1021b84) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0x38),0);
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar4 = (char *)(_UNK_01021d84 + 0x1021bc4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021d88 + 0x1021bd8));
    *pcVar4 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_01021d8c + 0x1021bf8) + 0x5c);
  uVar5 = *puVar3;
  uVar7 = puVar3[1];
  uVar9 = puVar3[2];
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,9,0);
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_50,uVar2,uVar5,uVar7,uVar9,0x3e800000,uStack_50,uStack_4c,uStack_48,uStack_44,
             uStack_40,1,0,0,0,0,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  piVar8 = *(int **)(_UNK_01021d90 + 0x1021c78);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[2];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar5 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01021d94 + 0x1021cc4));
    System_Action_object____ctor_1f11414(iVar6,uVar5,**(undefined4 **)(_UNK_01021d98 + 0x1021ce4),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_01021d9c + 0x1021d0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_50,&uStack_38,uVar2,iVar6,0,**(undefined4 **)(_UNK_01021da0 + 0x1021d30));
  *(undefined4 *)(param_1 + 0x38) = uStack_50;
  *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x40) = uStack_48;
  *(undefined4 *)(param_1 + 0x44) = uStack_44;
  thunk_FUN_00ec5080(param_1 + 0x40,0);
  return;
}

