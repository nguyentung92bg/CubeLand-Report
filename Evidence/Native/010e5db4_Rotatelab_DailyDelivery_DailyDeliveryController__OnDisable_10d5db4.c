/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$OnDisable
void Rotatelab_DailyDelivery_DailyDeliveryController__OnDisable (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$OnDisable
   void Rotatelab_DailyDelivery_DailyDeliveryController__OnDisable
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__OnDisable_10d5db4(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010e5e90 + 0x10e5dc8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5e94 + 0x10e5ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5e98 + 0x10e5de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5e9c + 0x10e5df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5ea0 + 0x10e5e00));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010e5ea4 + 0x10e5e14);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e5ea8 + 0x10e5e38));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010e5eac + 0x10e5e58),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010e5eb0 + 0x10e5e70));
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

