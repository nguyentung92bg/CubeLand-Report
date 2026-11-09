/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$OnEnable
void Rotatelab_CloudRush_CloudRushManager__OnEnable (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$OnEnable
   void Rotatelab_CloudRush_CloudRushManager__OnEnable (Rotatelab_CloudRush_CloudRushManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__OnEnable_10dfd9c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010eff0c + 0x10efdb0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eff10 + 0x10efdc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eff14 + 0x10efdd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eff18 + 0x10efddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eff1c + 0x10efde8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eff20 + 0x10efdf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eff24 + 0x10efe00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eff28 + 0x10efe0c));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__OnEnable_10cc0f0(param_1);
  piVar8 = *(int **)(_UNK_010eff2c + 0x10efe28);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x19c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010eff30 + 0x10efe4c));
  System_Action_bool__Int32Enum____ctor_1f17ef8
            (uVar4,param_1,**(undefined4 **)(_UNK_010eff34 + 0x10efe6c),0);
  uVar4 = Rotatelab_GameAction_bool__Int32Enum___op_Addition_23a3c3c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010eff38 + 0x10efe84));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x19c) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x198);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010eff3c + 0x10efeb4));
  System_Action_bool__Int32Enum____ctor_1f17ef8
            (uVar4,param_1,**(undefined4 **)(_UNK_010eff40 + 0x10efed4),0);
  uVar4 = Rotatelab_GameAction_bool__Int32Enum___op_Addition_23a3c3c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010eff44 + 0x10efeec));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x198);
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

