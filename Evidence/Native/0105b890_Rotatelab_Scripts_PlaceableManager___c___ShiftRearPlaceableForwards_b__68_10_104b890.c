/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_10
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_10 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_SwordController_o* sword, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_10
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_10
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_SwordController_o* sword,
   const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_10_104b890
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  
  pcVar6 = (char *)(_UNK_0105b958 + 0x105b8a4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b95c + 0x105b8b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b960 + 0x105b8c4));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105b964 + 0x105b8fc));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Scripts_PlaceableManager__TryUseSword_10479e0(iVar2,param_2);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105b968 + 0x105b930));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01016b24 + 0x1016828);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b28 + 0x101683c),param_2,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b2c + 0x1016848));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b30 + 0x1016854));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b34 + 0x1016860));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b38 + 0x101686c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b3c + 0x1016878));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b40 + 0x1016884));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b44 + 0x1016890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b48 + 0x101689c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016b4c + 0x10168a8));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01016b50 + 0x10168c0);
  uVar7 = *(undefined4 *)(iVar2 + 0x54);
  iStack_3c = 0;
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[9];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar4 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01016b54 + 0x1016910));
    System_Predicate_object____ctor_1876380
              (iVar8,uVar4,**(undefined4 **)(_UNK_01016b58 + 0x1016930),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0x24);
    *piVar5 = iVar8;
    thunk_FUN_00ec5080(piVar5,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_01016b5c + 0x1016958) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFindLast_object__148b80c
                    (uVar7,iVar8,&iStack_3c,**(undefined4 **)(_UNK_01016b60 + 0x101697c));
  if (iVar1 == 0) {
    uVar7 = *(undefined4 *)(iVar2 + 0x20);
    if (*(int *)(iVar2 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Transform__get_parent_36148d8(*(int *)(iVar2 + 0x24),0);
    if (*(int *)(**(int **)(_UNK_01016b64 + 0x10169b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iStack_3c = UnityEngine_Object__Instantiate_object__14d4e4c
                          (uVar7,uVar4,0,**(undefined4 **)(_UNK_01016b68 + 0x10169dc));
    if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(iStack_3c,0);
    if (*(int *)(iVar2 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_localPosition_3613b6c(&fStack_48,*(int *)(iVar2 + 0x24),0);
    if (*(int *)(iVar2 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(iVar2 + 0x54) + 0xc),
                                       (byte)(in_fpscr >> 0x16) & 3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localPosition_3613c6c
              (iVar1,fStack_48 + *(float *)(iVar2 + 0x28) * fVar9,
               fStack_44 + *(float *)(iVar2 + 0x2c) * fVar9,
               fStack_40 + *(float *)(iVar2 + 0x30) * fVar9,0);
    if (*(int *)(iVar2 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___Insert_267e98c
              (*(int *)(iVar2 + 0x54),0,iStack_3c,**(undefined4 **)(_UNK_01016b6c + 0x1016ac0));
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_UtilityPlaceableController__Place_104f080(param_2,iStack_3c,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01016b70 + 0x1016af4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(iVar2,param_2,0);
  return;
}

