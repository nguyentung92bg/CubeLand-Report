/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$Register
void Rotatelab_TriggeredOfferPresenter__Register (Rotatelab_ITriggeredOffer_o* offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$Register
   void Rotatelab_TriggeredOfferPresenter__Register (Rotatelab_ITriggeredOffer_o* offer, const
   MethodInfo* method); */

void Rotatelab_TriggeredOfferPresenter__Register_107b5c0(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  
  pcVar6 = (char *)(_UNK_0108b6a0 + 0x108b5d4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b6a4 + 0x108b5e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b6a8 + 0x108b5f4));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0108b6ac + 0x108b608);
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(uint *)(iVar3 + 0xc);
  piVar5 = *(int **)(_UNK_0108b6b0 + 0x108b650);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar7 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar7 + uVar8 * 4 + 0x10);
    *puVar4 = param_1;
  }
  else {
    uVar8 = *(uint *)(iVar3 + 0xc);
    System_Collections_Generic_List_object___EnsureCapacity_267e0f0
              (iVar3,uVar8 + 1,
               *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38) + 0x10
                                  ) + 0x60) + 0x3c));
    iVar7 = *(int *)(iVar3 + 8);
    *(uint *)(iVar3 + 0xc) = uVar8 + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    puVar4 = (undefined4 *)(iVar7 + uVar8 * 4 + 0x10);
    *puVar4 = param_1;
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

