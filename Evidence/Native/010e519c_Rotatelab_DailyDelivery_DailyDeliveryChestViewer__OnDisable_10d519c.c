/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$OnDisable
void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnDisable (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChestViewer$$OnDisable
   void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnDisable
   (Rotatelab_DailyDelivery_DailyDeliveryChestViewer_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChestViewer__OnDisable_10d519c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_010e52fc + 0x10e51b4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5300 + 0x10e51c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5304 + 0x10e51d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5308 + 0x10e51e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e530c + 0x10e51ec));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010e5310 + 0x10e5200);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  uVar5 = **(undefined4 **)(iVar1 + 0x5c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e5314 + 0x10e5224));
  System_Action_object__object____ctor_1f18fcc
            (uVar2,param_1,**(undefined4 **)(_UNK_010e5318 + 0x10e5244),0);
  uVar2 = Rotatelab_GameAction_object__object___op_Subtraction_23a50c4
                    (uVar5,uVar2,**(undefined4 **)(_UNK_010e531c + 0x10e525c));
  **(undefined4 **)(*piVar6 + 0x5c) = uVar2;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c));
  PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x28,0);
  iVar1 = *(int *)(param_1 + 0x10);
  pcVar4 = (char *)(_UNK_010e5320 + 0x10e529c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e5324 + 0x10e52b0));
    *pcVar4 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_010e5328 + 0x10e52c8) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  return;
}

