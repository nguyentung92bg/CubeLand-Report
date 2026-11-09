/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$OnActivated
void Rotatelab_Boosters_VacuumBoosterController__OnActivated (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$OnActivated
   void Rotatelab_Boosters_VacuumBoosterController__OnActivated
   (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController__OnActivated_1137e70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01148270 + 0x1147e88);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148274 + 0x1147e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148278 + 0x1147ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114827c + 0x1147eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148280 + 0x1147ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148284 + 0x1147ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148288 + 0x1147ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114828c + 0x1147ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148290 + 0x1147ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148294 + 0x1147efc));
    *pcVar4 = '\x01';
  }
  puStack_54 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = ZEXT48(puStack_54) << 0x20;
  uStack_30 = CONCAT44(iStack_4c,uStack_50);
  uStack_58 = 0;
  uStack_44 = (uint)puStack_54;
  uStack_40 = uStack_50;
  iStack_3c = iStack_4c;
  Rotatelab_Boosters_BaseBoosterController__OnActivated_1132370(param_1);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_ValueTuple_object__Quaternion____GetEnumerator_25baa0c
            (&uStack_78,*(int *)(param_1 + 0x3c),**(undefined4 **)(_UNK_01148298 + 0x1147f50));
  uStack_38._0_4_ = uStack_68;
  uStack_38._4_4_ = uStack_64;
  uStack_48 = uStack_78;
  uStack_44 = (uint)puStack_74;
  uStack_40 = uStack_70;
  iStack_3c = iStack_6c;
  uStack_30 = uStack_60;
  uStack_78 = 0;
  puVar12 = *(undefined4 **)(_UNK_0114829c + 0x1147f84);
  puStack_74 = &uStack_48;
  while (iVar1 = System_Collections_Generic_List_Enumerator_ValueTuple_object__Quaternion____MoveNext_214a9e0
                           (&uStack_48,*puVar12), iVar1 != 0) {
    if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localRotation_361507c
              (iStack_3c,(undefined4)uStack_38,uStack_38._4_4_,(undefined4)uStack_30,uStack_30._4_4_
               ,0);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_object__Quaternion____Dispose_214a9dc
            (&uStack_48,**(undefined4 **)(_UNK_011482a0 + 0x1147fd8));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  Rotatelab_FX_IDimEffectTarget__DimEverythingExceptStandardVoxels_10fc718(0);
  if (*(int *)(**(int **)(_UNK_011482a8 + 0x114803c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0x78),0);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 0x6c);
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  uVar9 = *(undefined4 *)(param_1 + 0x60);
  uVar10 = *(undefined4 *)(param_1 + 100);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x70);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_78,0x1b,0);
  PrimeTween_Tween__LocalPosition_2ce5748
            (&uStack_78,uVar11,uVar2,uVar3,uVar6,uVar5,uVar9,uVar10,0x3e99999a,uStack_78,puStack_74,
             uStack_70,iStack_6c,uStack_68,1,0,0,0,0,0);
  piVar7 = *(int **)(_UNK_011482ac + 0x1148100);
  iVar1 = *piVar7;
  uStack_58 = uStack_78;
  puStack_54 = puStack_74;
  uStack_50 = uStack_70;
  iStack_4c = iStack_6c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar12 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar12[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar12 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar2 = *puVar12;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011482b0 + 0x1148150));
    System_Action_object____ctor_1f11414(iVar8,uVar2,**(undefined4 **)(_UNK_011482b4 + 0x1148170),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar8;
    thunk_FUN_00ec5080(piVar7,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_011482b8 + 0x1148198) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_78,&uStack_58,param_1,iVar8,0,**(undefined4 **)(_UNK_011482bc + 0x11481b8));
  *(undefined4 *)(param_1 + 0x78) = uStack_78;
  *(undefined4 **)(param_1 + 0x7c) = puStack_74;
  *(undefined4 *)(param_1 + 0x80) = uStack_70;
  *(int *)(param_1 + 0x84) = iStack_6c;
  thunk_FUN_00ec5080(param_1 + 0x80,0);
  uVar2 = Rotatelab_Boosters_VacuumBoosterController__CameraRotationCoroutine_11382c0(param_1);
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar2,0);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x88),uVar2);
  return;
}

