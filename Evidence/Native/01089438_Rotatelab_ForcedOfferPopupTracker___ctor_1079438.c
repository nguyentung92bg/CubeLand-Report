/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$.ctor
void Rotatelab_ForcedOfferPopupTracker___ctor (Rotatelab_ForcedOfferPopupTracker_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$.ctor
   void Rotatelab_ForcedOfferPopupTracker___ctor (Rotatelab_ForcedOfferPopupTracker_o* __this,
   System_String_o* key, const MethodInfo* method); */

void Rotatelab_ForcedOfferPopupTracker___ctor_1079438(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  
  pcVar8 = (char *)(_UNK_0108966c + 0x1089454);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089670 + 0x1089468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089674 + 0x1089474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089678 + 0x1089480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108967c + 0x108948c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089680 + 0x1089498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089684 + 0x10894a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089688 + 0x10894b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108968c + 0x10894bc));
    *pcVar8 = '\x01';
  }
  System_Object___ctor_2bb93bc(param_1,0);
  puVar6 = *(undefined4 **)(_UNK_01089694 + 0x10894f0);
  uVar3 = System_String__Concat_2a0b574
                    (*puVar6,param_2,**(undefined4 **)(_UNK_01089690 + 0x10894e4),0);
  puVar9 = *(undefined4 **)(_UNK_01089698 + 0x1089504);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  Rotatelab_Save_SavedInt___ctor_10796b8(uVar4,uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),uVar4);
  uVar3 = System_String__Concat_2a0b574
                    (*puVar6,param_2,**(undefined4 **)(_UNK_0108969c + 0x108953c),0);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  Rotatelab_Save_SavedInt___ctor_10796b8(uVar4,uVar3,0);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar4);
  uVar3 = System_String__Concat_2a0b574
                    (*puVar6,param_2,**(undefined4 **)(_UNK_010896a0 + 0x1089584),0);
  piVar11 = *(int **)(_UNK_010896a4 + 0x108959c);
  iVar5 = *piVar11;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar11;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 8);
  uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xc);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010896a8 + 0x10895c0));
  Rotatelab_Save_SavedDateTime___ctor_107971c(uVar4,uVar3,uVar7,uVar10,0);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar4);
  uVar3 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_010896b0 + 0x1089618),param_2,
                     **(undefined4 **)(_UNK_010896ac + 0x108960c),0);
  uVar7 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 8);
  uVar10 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0xc);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010896b4 + 0x1089634));
  Rotatelab_Save_SavedDateTime___ctor_107971c(uVar4,uVar3,uVar7,uVar10,0);
  puVar6 = (undefined4 *)(param_1 + 0x14);
  *puVar6 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

