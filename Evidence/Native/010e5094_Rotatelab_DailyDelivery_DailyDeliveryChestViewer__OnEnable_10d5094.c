/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$OnEnable
void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnEnable (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$OnEnable
   void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnEnable
   (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnEnable_10d5094(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_010e5178 + 0x10e50a8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e517c + 0x10e50bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5180 + 0x10e50c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5184 + 0x10e50d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5188 + 0x10e50e0));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010e518c + 0x10e50f4);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = **(undefined4 **)(iVar3 + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e5190 + 0x10e5118));
  System_Action_object__object____ctor_1f18fcc
            (uVar4,param_1,**(undefined4 **)(_UNK_010e5194 + 0x10e5138),0);
  uVar4 = Rotatelab_GameAction_object__object___op_Addition_23a4fa8
                    (uVar6,uVar4,**(undefined4 **)(_UNK_010e5198 + 0x10e5150));
  **(undefined4 **)(*piVar7 + 0x5c) = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar7 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar7 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

