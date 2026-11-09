/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$.cctor
void Rotatelab_DailyDelivery_DailyDeliveryChest___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$.cctor
   void Rotatelab_DailyDelivery_DailyDeliveryChest___cctor (const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChest___cctor_10d4fe0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010e5078 + 0x10e4ff0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e507c + 0x10e5004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5080 + 0x10e5010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5084 + 0x10e501c));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e5088 + 0x10e5030));
  Rotatelab_GameAction_object__object____ctor_23a4f78
            (uVar3,0,**(undefined4 **)(_UNK_010e508c + 0x10e5048));
  piVar4 = *(int **)(_UNK_010e5090 + 0x10e505c);
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

