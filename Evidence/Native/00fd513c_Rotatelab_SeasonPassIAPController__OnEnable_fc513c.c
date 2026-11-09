/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnEnable
void Rotatelab_SeasonPassIAPController__OnEnable (Rotatelab_SeasonPassIAPController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnEnable
   void Rotatelab_SeasonPassIAPController__OnEnable (Rotatelab_SeasonPassIAPController_o* __this,
   const MethodInfo* method); */

void Rotatelab_SeasonPassIAPController__OnEnable_fc513c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_00fd528c + 0xfd5150);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5290 + 0xfd5164));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5294 + 0xfd5170));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5298 + 0xfd517c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd529c + 0xfd5188));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd52a0 + 0xfd5194));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd52a4 + 0xfd51a0));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_00fd52a8 + 0xfd51b4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xec);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd52ac + 0xfd51d8));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fd52b0 + 0xfd51f8),0);
  Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xec);
  *puVar5 = uVar7;
  thunk_FUN_00ec5080(puVar5,uVar7);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xe0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd52b4 + 0xfd5234));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_00fd52b8 + 0xfd5254),0);
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_00fd52bc + 0xfd526c));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xe0);
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

