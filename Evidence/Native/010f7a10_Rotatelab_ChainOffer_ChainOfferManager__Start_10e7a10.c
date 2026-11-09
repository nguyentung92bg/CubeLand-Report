/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$Start
void Rotatelab_ChainOffer_ChainOfferManager__Start (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$Start
   void Rotatelab_ChainOffer_ChainOfferManager__Start (Rotatelab_ChainOffer_ChainOfferManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_ChainOfferManager__Start_10e7a10(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  
  pcVar5 = (char *)(_UNK_010f7d40 + 0x10f7a28);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d44 + 0x10f7a3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d48 + 0x10f7a48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d4c + 0x10f7a54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d50 + 0x10f7a60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d54 + 0x10f7a6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d58 + 0x10f7a78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d5c + 0x10f7a84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d60 + 0x10f7a90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d64 + 0x10f7a9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d68 + 0x10f7aa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d6c + 0x10f7ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7d70 + 0x10f7ac0));
    *pcVar5 = '\x01';
  }
  Rotatelab_ChainOffer_ChainOfferManager__OnMainMenuArrival_10e7da4(param_1,1);
  uVar3 = Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine_10e7f00
                    (param_1);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f7d74 + 0x10f7b08));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar3,param_1,**(undefined4 **)(_UNK_010f7d78 + 0x10f7b28),0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar7,uVar3,0);
  iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010f7d7c + 0x10f7b58));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = *(int **)(_UNK_010f7d80 + 0x10f7b78);
  piVar8 = (int *)(iVar7 + 0x20);
  iVar7 = *piVar8;
  uVar3 = thunk_FUN_00f00cdc(*piVar11);
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010f7d84 + 0x10f7b9c),0);
  piVar4 = (int *)System_Delegate__Combine_2bbca94(iVar7,uVar3,0);
  if (piVar4 == (int *)0x0) {
    *piVar8 = 0;
    piVar4 = (int *)0x0;
  }
  else {
    iVar7 = *piVar11;
    if (*piVar4 != iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar4);
    }
    *piVar8 = (int)piVar4;
    if (*piVar4 != iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar4);
    }
  }
  thunk_FUN_00ec5080(piVar8,piVar4);
  piVar4 = *(int **)(_UNK_010f7d88 + 0x10f7c2c);
  iVar7 = *piVar4;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    iVar7 = *piVar4;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x120);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f7d8c + 0x10f7c50));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar3,param_1,**(undefined4 **)(_UNK_010f7d90 + 0x10f7c70),0);
  uVar3 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar6,uVar3,**(undefined4 **)(_UNK_010f7d94 + 0x10f7c88));
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0x120) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar7 = *(int *)(*(int *)(*piVar4 + 0x5c) + 0xd8);
  if (*(int *)(**(int **)(_UNK_010f7d98 + 0x10f7cb4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar3,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar7,uVar3,1,1,**(undefined4 **)(_UNK_010f7d9c + 0x10f7d04));
  if (*(int *)(**(int **)(_UNK_010f7da0 + 0x10f7d1c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_0108b6a0 + 0x108b5d4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b6a4 + 0x108b5e8),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b6a8 + 0x108b5f4));
    *pcVar5 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0108b6ac + 0x108b608);
  iVar7 = *piVar4;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    iVar7 = *piVar4;
  }
  iVar7 = **(int **)(iVar7 + 0x5c);
  if (iVar7 != 0) {
    iVar9 = *(int *)(iVar7 + 8);
    uVar10 = *(uint *)(iVar7 + 0xc);
    piVar4 = *(int **)(_UNK_0108b6b0 + 0x108b650);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar10 + 1;
      piVar4 = (int *)(iVar9 + uVar10 * 4 + 0x10);
      *piVar4 = param_1;
    }
    else {
      uVar10 = *(uint *)(iVar7 + 0xc);
      System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                (iVar7,uVar10 + 1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38) +
                                    0x10) + 0x60) + 0x3c));
      iVar9 = *(int *)(iVar7 + 8);
      *(uint *)(iVar7 + 0xc) = uVar10 + 1;
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar4 = (int *)(iVar9 + uVar10 * 4 + 0x10);
      *piVar4 = param_1;
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
      return;
    }
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

