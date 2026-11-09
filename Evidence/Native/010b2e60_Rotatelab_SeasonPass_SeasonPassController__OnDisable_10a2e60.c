/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnDisable
void Rotatelab_SeasonPass_SeasonPassController__OnDisable (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnDisable
   void Rotatelab_SeasonPass_SeasonPassController__OnDisable
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__OnDisable_10a2e60(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010b3040 + 0x10b2e74);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3044 + 0x10b2e88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3048 + 0x10b2e94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b304c + 0x10b2ea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3050 + 0x10b2eac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3054 + 0x10b2eb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3058 + 0x10b2ec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b305c + 0x10b2ed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3060 + 0x10b2edc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3064 + 0x10b2ee8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010b3068 + 0x10b2efc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b306c + 0x10b2f20));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010b3070 + 0x10b2f40),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010b3074 + 0x10b2f58));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x184);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b3078 + 0x10b2f88));
  System_Action_int____ctor_1f105bc(uVar4,param_1,**(undefined4 **)(_UNK_010b307c + 0x10b2fa8),0);
  uVar4 = Rotatelab_GameAction_int___op_Subtraction_23a2bac
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010b3080 + 0x10b2fc0));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x184) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x78);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b3084 + 0x10b2ff0));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010b3088 + 0x10b3010),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x78);
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

