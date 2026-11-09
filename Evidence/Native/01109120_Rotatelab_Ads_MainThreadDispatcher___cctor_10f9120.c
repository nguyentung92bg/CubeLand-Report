/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$.cctor
void Rotatelab_Ads_MainThreadDispatcher___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$.cctor
   void Rotatelab_Ads_MainThreadDispatcher___cctor (const MethodInfo* method); */

void Rotatelab_Ads_MainThreadDispatcher___cctor_10f9120(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_011091b4 + 0x1109130);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011091b8 + 0x1109144));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011091bc + 0x1109150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011091c0 + 0x110915c));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011091c4 + 0x1109170));
  System_Collections_Generic_Queue_object____ctor_18fc494
            (uVar3,**(undefined4 **)(_UNK_011091c8 + 0x1109184));
  piVar4 = *(int **)(_UNK_011091cc + 0x1109198);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

