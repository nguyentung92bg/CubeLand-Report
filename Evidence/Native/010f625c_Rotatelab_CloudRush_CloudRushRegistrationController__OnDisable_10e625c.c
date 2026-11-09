/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$OnDisable
void Rotatelab_CloudRush_CloudRushRegistrationController__OnDisable (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$OnDisable
   void Rotatelab_CloudRush_CloudRushRegistrationController__OnDisable
   (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushRegistrationController__OnDisable_10e625c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010f6324 + 0x10f6270);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6328 + 0x10f6284));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f632c + 0x10f6290));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6330 + 0x10f629c));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010f6334 + 0x10f62b0);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x194);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f6338 + 0x10f62d4));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010f633c + 0x10f62f4),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x194);
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

