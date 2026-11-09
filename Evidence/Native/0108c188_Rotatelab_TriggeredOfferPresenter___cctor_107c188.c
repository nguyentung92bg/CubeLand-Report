/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$.cctor
void Rotatelab_TriggeredOfferPresenter___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$.cctor
   void Rotatelab_TriggeredOfferPresenter___cctor (const MethodInfo* method); */

void Rotatelab_TriggeredOfferPresenter___cctor_107c188(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0108c2b4 + 0x108c198);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c2b8 + 0x108c1ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c2bc + 0x108c1b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c2c0 + 0x108c1c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c2c4 + 0x108c1d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c2c8 + 0x108c1dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c2cc + 0x108c1e8));
    *pcVar5 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c2d0 + 0x108c1fc));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar3,8,**(undefined4 **)(_UNK_0108c2d4 + 0x108c214));
  piVar6 = *(int **)(_UNK_0108c2d8 + 0x108c22c);
  **(undefined4 **)(*piVar6 + 0x5c) = uVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c),uVar3);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c2dc + 0x108c24c));
  System_Collections_Generic_Queue_object____ctor_18fc508
            (uVar3,4,**(undefined4 **)(_UNK_0108c2e0 + 0x108c264));
  puVar4 = (undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4);
  *puVar4 = uVar3;
  thunk_FUN_00ec5080(puVar4,uVar3);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c2e4 + 0x108c28c));
  System_Object___ctor_2bb93bc(uVar3,0);
  puVar4 = (undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8);
  *puVar4 = uVar3;
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

