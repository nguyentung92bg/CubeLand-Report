/* IL2CPP: Rotatelab.Boosters.CannonShootEventRelay$$Awake
void Rotatelab_Boosters_CannonShootEventRelay__Awake (Rotatelab_Boosters_CannonShootEventRelay_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonShootEventRelay$$Awake
   void Rotatelab_Boosters_CannonShootEventRelay__Awake (Rotatelab_Boosters_CannonShootEventRelay_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonShootEventRelay__Awake_1134fac(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01145004 + 0x1144fc0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145008 + 0x1144fd4));
    *pcVar5 = '\x01';
  }
  uVar3 = UnityEngine_Component__GetComponentInParent_object__143f94c
                    (param_1,**(undefined4 **)(_UNK_0114500c + 0x1144fe8));
  puVar4 = (undefined4 *)(param_1 + 0x10);
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

