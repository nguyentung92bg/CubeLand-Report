/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$OnEnable
void Rotatelab_DailyDelivery_DailyDeliveryController__OnEnable (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$OnEnable
   void Rotatelab_DailyDelivery_DailyDeliveryController__OnEnable
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__OnEnable_10d5cb4(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010e5d90 + 0x10e5cc8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5d94 + 0x10e5cdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5d98 + 0x10e5ce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5d9c + 0x10e5cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5da0 + 0x10e5d00));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010e5da4 + 0x10e5d14);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e5da8 + 0x10e5d38));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010e5dac + 0x10e5d58),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010e5db0 + 0x10e5d70));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

