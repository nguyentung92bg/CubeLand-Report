/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$OnEnable
void Rotatelab_Shop_DailyQuestInfoController__OnEnable (Rotatelab_Shop_DailyQuestInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$OnEnable
   void Rotatelab_Shop_DailyQuestInfoController__OnEnable
   (Rotatelab_Shop_DailyQuestInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestInfoController__OnEnable_10be97c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010cea58 + 0x10ce990);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cea5c + 0x10ce9a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cea60 + 0x10ce9b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cea64 + 0x10ce9bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cea68 + 0x10ce9c8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010cea6c + 0x10ce9dc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x170);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cea70 + 0x10cea00));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_010cea74 + 0x10cea20),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010cea78 + 0x10cea38));
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

