/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnEnable
void Rotatelab_Scripts_BulletFlowTracker__OnEnable (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnEnable
   void Rotatelab_Scripts_BulletFlowTracker__OnEnable (Rotatelab_Scripts_BulletFlowTracker_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BulletFlowTracker__OnEnable_ff96b4(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01009938 + 0x10096c8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100993c + 0x10096dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009940 + 0x10096e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009944 + 0x10096f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009948 + 0x1009700));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100994c + 0x100970c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009950 + 0x1009718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009954 + 0x1009724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009958 + 0x1009730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100995c + 0x100973c));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01009960 + 0x1009750);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar9 = *(undefined4 **)(_UNK_01009964 + 0x1009774);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01009968 + 0x1009794),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 4) = uVar4;
  thunk_FUN_00ec5080();
  piVar7 = *(int **)(_UNK_0100996c + 0x10097cc);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x84);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  puVar8 = *(undefined4 **)(_UNK_01009970 + 0x1009808);
  System_Action___ctor_2b10bac(uVar4,param_1,*puVar8,0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x84) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x78);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar4,param_1,*puVar8,0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x78) = uVar4;
  thunk_FUN_00ec5080();
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01009974 + 0x1009888));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01009978 + 0x100989c));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0100997c + 0x10098b8),0);
  if (iVar3 != 0) {
    Rotatelab_Scripts_LevelStateManager__add_OnPauseStateChanged_10162e4(iVar3,uVar4,0);
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
    uVar4 = thunk_FUN_00f00cdc(*puVar9);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01009980 + 0x1009908),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
    puVar9 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
    *puVar9 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar9 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar9 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

