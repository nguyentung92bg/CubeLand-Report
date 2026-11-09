/* IL2CPP: Rotatelab.Boosters.CannonProjectileController$$Fire
void Rotatelab_Boosters_CannonProjectileController__Fire (Rotatelab_Boosters_CannonProjectileController_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, System_Action_o* onImpact, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonProjectileController$$Fire
   void Rotatelab_Boosters_CannonProjectileController__Fire
   (Rotatelab_Boosters_CannonProjectileController_o* __this, UnityEngine_Vector3_o start,
   UnityEngine_Vector3_o end, System_Action_o* onImpact, const MethodInfo* method); */

void Rotatelab_Boosters_CannonProjectileController__Fire_1133858
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar6 = (char *)(_UNK_01143c1c + 0x1143880);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c20 + 0x11438a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c24 + 0x11438b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c28 + 0x11438c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c2c + 0x11438cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c30 + 0x11438d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c34 + 0x11438e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c38 + 0x11438f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01143c3c + 0x11438fc));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  uStack_40 = 0;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x38) = param_8;
  *(undefined4 *)(param_1 + 0x30) = param_6;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x38),param_8);
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar4,param_2,param_3,param_4,0);
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x40),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
  piVar7 = *(int **)(_UNK_01143c40 + 0x11439e4);
  iVar4 = *piVar7;
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar7;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar8 = puVar5[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar9 = *puVar5;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01143c44 + 0x1143a38));
    System_Action_object__float____ctor_1f19254
              (iVar8,uVar9,**(undefined4 **)(_UNK_01143c48 + 0x1143a58),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar8;
    thunk_FUN_00ec5080(piVar7,iVar8);
  }
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_58,4,0);
  uVar3 = uStack_4c;
  uVar2 = uStack_50;
  uVar1 = uStack_54;
  uVar9 = uStack_58;
  if (*(int *)(**(int **)(_UNK_01143c4c + 0x1143a94) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_object__15d5b3c
            (&uStack_58,param_1,0,0x3f800000,uVar10,iVar8,uVar9,uVar1,uVar2,uVar3,uStack_48,1,0,0,0,
             0,**(undefined4 **)(_UNK_01143c50 + 0x1143ad0));
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_40,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  piVar7 = *(int **)(_UNK_01143c54 + 0x1143b40);
  iVar4 = *piVar7;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar7;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar8 = puVar5[2];
  if (iVar8 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar10 = *puVar5;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01143c58 + 0x1143b90));
    System_Action_object____ctor_1f11414
              (iVar8,uVar10,**(undefined4 **)(_UNK_01143c5c + 0x1143bb0),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
    *piVar7 = iVar8;
    thunk_FUN_00ec5080(piVar7,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_58,&uStack_40,param_1,iVar8,0,**(undefined4 **)(_UNK_01143c60 + 0x1143be0));
  *(undefined4 *)(param_1 + 0x40) = uStack_58;
  *(undefined4 *)(param_1 + 0x44) = uStack_54;
  *(undefined4 *)(param_1 + 0x48) = uStack_50;
  *(undefined4 *)(param_1 + 0x4c) = uStack_4c;
  thunk_FUN_00ec5080(param_1 + 0x48,0);
  return;
}

