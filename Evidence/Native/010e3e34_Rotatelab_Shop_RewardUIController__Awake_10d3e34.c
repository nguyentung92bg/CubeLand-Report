/* IL2CPP: Rotatelab.Shop.RewardUIController$$Awake
void Rotatelab_Shop_RewardUIController__Awake (Rotatelab_Shop_RewardUIController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardUIController$$Awake
   void Rotatelab_Shop_RewardUIController__Awake (Rotatelab_Shop_RewardUIController_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_RewardUIController__Awake_10d3e34(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010e3f10 + 0x10e3e48);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3f14 + 0x10e3e5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3f18 + 0x10e3e68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3f1c + 0x10e3e74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3f20 + 0x10e3e80));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010e3f24 + 0x10e3e94);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x128);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e3f28 + 0x10e3eb8));
  System_Action_object__object____ctor_1f18fcc
            (uVar4,param_1,**(undefined4 **)(_UNK_010e3f2c + 0x10e3ed8),0);
  uVar4 = Rotatelab_GameAction_object__object___op_Addition_23a4fa8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010e3f30 + 0x10e3ef0));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x128);
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

