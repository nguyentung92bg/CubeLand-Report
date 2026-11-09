/* IL2CPP: Rotatelab.RemoteConfigManager.<>c$$.cctor
void Rotatelab_RemoteConfigManager___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager.<>c$$.cctor
   void Rotatelab_RemoteConfigManager___c___cctor (const MethodInfo* method); */

void Rotatelab_RemoteConfigManager___c___cctor_10751e0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01085248 + 0x10851f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108524c + 0x1085204));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01085250 + 0x1085218);
  uVar3 = thunk_FUN_00f00cdc(*piVar5);
  System_Object___ctor_2bb93bc(uVar3,0);
  **(undefined4 **)(*piVar5 + 0x5c) = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar5 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar5 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

