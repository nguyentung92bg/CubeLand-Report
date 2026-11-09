/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$OnDisable
void Rotatelab_Scripts_BlasterDockComboFeedback__OnDisable (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$OnDisable
   void Rotatelab_Scripts_BlasterDockComboFeedback__OnDisable
   (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockComboFeedback__OnDisable_100bb40(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0101bca8 + 0x101bb54);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bcac + 0x101bb68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bcb0 + 0x101bb74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bcb4 + 0x101bb80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bcb8 + 0x101bb8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bcbc + 0x101bb98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bcc0 + 0x101bba4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101bcc4 + 0x101bbb0));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0101bcc8 + 0x101bbc4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x50);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101bccc + 0x101bbe8));
  System_Action_int____ctor_1f105bc(uVar4,param_1,**(undefined4 **)(_UNK_0101bcd0 + 0x101bc08),0);
  uVar4 = Rotatelab_GameAction_int___op_Subtraction_23a2bac
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101bcd4 + 0x101bc20));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x50) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x58);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101bcd8 + 0x101bc50));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0101bcdc + 0x101bc70),0);
  uVar4 = Rotatelab_GameAction_bool___op_Subtraction_23a2944
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0101bce0 + 0x101bc88));
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

