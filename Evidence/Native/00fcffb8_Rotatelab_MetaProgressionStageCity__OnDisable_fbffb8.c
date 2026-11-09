/* IL2CPP: Rotatelab.MetaProgressionStageCity$$OnDisable
void Rotatelab_MetaProgressionStageCity__OnDisable (Rotatelab_MetaProgressionStageCity_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageCity$$OnDisable
   void Rotatelab_MetaProgressionStageCity__OnDisable (Rotatelab_MetaProgressionStageCity_o* __this,
   const MethodInfo* method); */

void Rotatelab_MetaProgressionStageCity__OnDisable_fbffb8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_00fd007c + 0xfcffcc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0080 + 0xfcffe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0084 + 0xfcffec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0088 + 0xfcfff8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_00fd008c + 0xfd000c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x174);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd0090 + 0xfd0030));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fd0094 + 0xfd0050),0);
  Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x174);
  *puVar5 = uVar7;
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

