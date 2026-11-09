/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnDisable
void Rotatelab_Scripts_ComboBarUI__OnDisable (Rotatelab_Scripts_ComboBarUI_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnDisable
   void Rotatelab_Scripts_ComboBarUI__OnDisable (Rotatelab_Scripts_ComboBarUI_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ComboBarUI__OnDisable_1000fb0(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_01011208 + 0x1010fc4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101120c + 0x1010fd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011210 + 0x1010fe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011214 + 0x1010ff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011218 + 0x1010ffc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101121c + 0x1011008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011220 + 0x1011014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011224 + 0x1011020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011228 + 0x101102c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101122c + 0x1011038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011230 + 0x1011044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011234 + 0x1011050));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01011238 + 0x1011064);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x4c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101123c + 0x1011088));
  System_Action_float__int____ctor_1f19ee8
            (uVar4,param_1,**(undefined4 **)(_UNK_01011240 + 0x10110a8),0);
  uVar4 = Rotatelab_GameAction_float__int___op_Subtraction_23a532c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01011244 + 0x10110c0));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x4c) = uVar4;
  thunk_FUN_00ec5080();
  puVar9 = *(undefined4 **)(_UNK_01011248 + 0x10110f0);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x50);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_int____ctor_1f105bc(uVar4,param_1,**(undefined4 **)(_UNK_0101124c + 0x1011110),0);
  puVar5 = *(undefined4 **)(_UNK_01011250 + 0x101112c);
  uVar4 = Rotatelab_GameAction_int___op_Subtraction_23a2bac(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x50) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x54);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_int____ctor_1f105bc(uVar4,param_1,**(undefined4 **)(_UNK_01011254 + 0x1011170),0);
  uVar4 = Rotatelab_GameAction_int___op_Subtraction_23a2bac(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x54) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x58);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01011258 + 0x10111b0));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0101125c + 0x10111d0),0);
  uVar4 = Rotatelab_GameAction_bool___op_Subtraction_23a2944
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01011260 + 0x10111e8));
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

