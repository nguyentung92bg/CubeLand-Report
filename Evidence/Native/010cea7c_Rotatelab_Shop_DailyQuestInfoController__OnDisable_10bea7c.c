/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$OnDisable
void Rotatelab_Shop_DailyQuestInfoController__OnDisable (Rotatelab_Shop_DailyQuestInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$OnDisable
   void Rotatelab_Shop_DailyQuestInfoController__OnDisable
   (Rotatelab_Shop_DailyQuestInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestInfoController__OnDisable_10bea7c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010ceb58 + 0x10cea90);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ceb5c + 0x10ceaa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ceb60 + 0x10ceab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ceb64 + 0x10ceabc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ceb68 + 0x10ceac8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010ceb6c + 0x10ceadc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x170);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ceb70 + 0x10ceb00));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_010ceb74 + 0x10ceb20),0);
  uVar4 = Rotatelab_GameAction_bool___op_Subtraction_23a2944
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010ceb78 + 0x10ceb38));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x170);
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

