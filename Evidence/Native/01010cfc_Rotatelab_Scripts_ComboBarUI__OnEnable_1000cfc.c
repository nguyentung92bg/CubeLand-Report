/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnEnable
void Rotatelab_Scripts_ComboBarUI__OnEnable (Rotatelab_Scripts_ComboBarUI_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnEnable
   void Rotatelab_Scripts_ComboBarUI__OnEnable (Rotatelab_Scripts_ComboBarUI_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ComboBarUI__OnEnable_1000cfc(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar6 = (char *)(_UNK_01010f54 + 0x1010d10);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f58 + 0x1010d24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f5c + 0x1010d30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f60 + 0x1010d3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f64 + 0x1010d48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f68 + 0x1010d54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f6c + 0x1010d60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f70 + 0x1010d6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f74 + 0x1010d78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f78 + 0x1010d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f7c + 0x1010d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010f80 + 0x1010d9c));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01010f84 + 0x1010db0);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x4c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01010f88 + 0x1010dd4));
  System_Action_float__int____ctor_1f19ee8
            (uVar4,param_1,**(undefined4 **)(_UNK_01010f8c + 0x1010df4),0);
  uVar4 = Rotatelab_GameAction_float__int___op_Addition_23a5210
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01010f90 + 0x1010e0c));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x4c) = uVar4;
  thunk_FUN_00ec5080();
  puVar9 = *(undefined4 **)(_UNK_01010f94 + 0x1010e3c);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x50);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_int____ctor_1f105bc(uVar4,param_1,**(undefined4 **)(_UNK_01010f98 + 0x1010e5c),0);
  puVar5 = *(undefined4 **)(_UNK_01010f9c + 0x1010e78);
  uVar4 = Rotatelab_GameAction_int___op_Addition_23a2a90(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x50) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x54);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_int____ctor_1f105bc(uVar4,param_1,**(undefined4 **)(_UNK_01010fa0 + 0x1010ebc),0);
  uVar4 = Rotatelab_GameAction_int___op_Addition_23a2a90(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x54) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x58);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01010fa4 + 0x1010efc));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_01010fa8 + 0x1010f1c),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01010fac + 0x1010f34));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x58);
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

