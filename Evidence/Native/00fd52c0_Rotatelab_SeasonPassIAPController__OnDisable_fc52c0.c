/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnDisable
void Rotatelab_SeasonPassIAPController__OnDisable (Rotatelab_SeasonPassIAPController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnDisable
   void Rotatelab_SeasonPassIAPController__OnDisable (Rotatelab_SeasonPassIAPController_o* __this,
   const MethodInfo* method); */

void Rotatelab_SeasonPassIAPController__OnDisable_fc52c0(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_00fd5410 + 0xfd52d4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5414 + 0xfd52e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5418 + 0xfd52f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd541c + 0xfd5300));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5420 + 0xfd530c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5424 + 0xfd5318));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5428 + 0xfd5324));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_00fd542c + 0xfd5338);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xec);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd5430 + 0xfd535c));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fd5434 + 0xfd537c),0);
  Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xec);
  *puVar5 = uVar7;
  thunk_FUN_00ec5080(puVar5,uVar7);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xe0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd5438 + 0xfd53b8));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_00fd543c + 0xfd53d8),0);
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_00fd5440 + 0xfd53f0));
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

