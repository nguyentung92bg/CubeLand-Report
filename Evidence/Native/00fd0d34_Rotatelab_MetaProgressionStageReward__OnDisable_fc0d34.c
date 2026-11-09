/* IL2CPP: Rotatelab.MetaProgressionStageReward$$OnDisable
void Rotatelab_MetaProgressionStageReward__OnDisable (Rotatelab_MetaProgressionStageReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageReward$$OnDisable
   void Rotatelab_MetaProgressionStageReward__OnDisable (Rotatelab_MetaProgressionStageReward_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionStageReward__OnDisable_fc0d34(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_00fd0df8 + 0xfd0d48);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0dfc + 0xfd0d5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0e00 + 0xfd0d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0e04 + 0xfd0d74));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_00fd0e08 + 0xfd0d88);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x178);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd0e0c + 0xfd0dac));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fd0e10 + 0xfd0dcc),0);
  Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x178);
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

