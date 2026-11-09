/* IL2CPP: Rotatelab.MetaProgressionStageReward$$Collect
void Rotatelab_MetaProgressionStageReward__Collect (Rotatelab_MetaProgressionStageReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageReward$$Collect
   void Rotatelab_MetaProgressionStageReward__Collect (Rotatelab_MetaProgressionStageReward_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionStageReward__Collect_fc1308(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 auStack_28 [16];
  
  pcVar5 = (char *)(_UNK_00fd1518 + 0xfd1320);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd151c + 0xfd1334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1520 + 0xfd1340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1524 + 0xfd134c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1528 + 0xfd1358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd152c + 0xfd1364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1530 + 0xfd1370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1534 + 0xfd137c));
    *pcVar5 = '\x01';
  }
  Rotatelab_MetaProgressionBaseStage__Collect_fbbcfc(param_1,0);
  piVar8 = *(int **)(_UNK_00fd1538 + 0xfd139c);
  iVar4 = *(int *)(param_1 + 0x40);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd153c + 0xfd13e8));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fd1540 + 0xfd1408),0);
    piVar2 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar2 = iVar6;
    thunk_FUN_00ec5080(piVar2,iVar6);
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar4,iVar6,**(undefined4 **)(_UNK_00fd1544 + 0xfd1440));
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar3[2];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd1548 + 0xfd1494));
    System_Action___ctor_2b10bac(iVar4,uVar7,**(undefined4 **)(_UNK_00fd154c + 0xfd14b4),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
    *piVar8 = iVar4;
    thunk_FUN_00ec5080(piVar8,iVar4);
  }
  if (*(int *)(**(int **)(_UNK_00fd1550 + 0xfd14dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(auStack_28,0x3ecccccd,iVar4,0,0,0);
  return;
}

