/* IL2CPP: Rotatelab.Scripts.GameManager$$Awake
void Rotatelab_Scripts_GameManager__Awake (Rotatelab_Scripts_GameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$Awake
   void Rotatelab_Scripts_GameManager__Awake (Rotatelab_Scripts_GameManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_GameManager__Awake_1065d38(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_010760cc + 0x1075d4c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760d0 + 0x1075d60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760d4 + 0x1075d6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760d8 + 0x1075d78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760dc + 0x1075d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760e0 + 0x1075d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760e4 + 0x1075d9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760e8 + 0x1075da8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760ec + 0x1075db4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760f0 + 0x1075dc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760f4 + 0x1075dcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760f8 + 0x1075dd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010760fc + 0x1075de4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076100 + 0x1075df0));
    *pcVar5 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01076104 + 0x1075e04));
  if (*(int *)(**(int **)(_UNK_01076108 + 0x1075e18) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__set_targetFrameRate_35a8118(0x3c,0);
  UnityEngine_Screen__set_sleepTimeout_35bd1d4(0xffffffff,0);
  UnityEngine_Input__set_multiTouchEnabled_368bc34(0,0);
  if (*(int *)(**(int **)(_UNK_0107610c + 0x1075e58) + 0x74) == 0) {
    FUN_00ec3934();
  }
  DG_Tweening_DOTween__SetTweensCapacity_11667ac(400,0x7d,0);
  PrimeTween_PrimeTweenConfig__SetTweensCapacity_2cf30c4(0x800,0);
  PrimeTween_PrimeTweenConfig__set_warnZeroDuration_2cf3524(0,0);
  PrimeTween_PrimeTweenConfig__set_warnEndValueEqualsCurrent_2cf359c(0,0);
  PrimeTween_PrimeTweenConfig__set_warnTweenOnDisabledTarget_2cf34ac(0,0);
  PrimeTween_PrimeTweenConfig__set_warnIfTargetDestroyed_2cf3614(0,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076110 + 0x1075ec0));
  if (iVar3 != 0) {
    Rotatelab_Scripts_LevelManager__RefreshCurrentLevel_1066138(iVar3);
    piVar7 = *(int **)(_UNK_01076114 + 0x1075ee8);
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    puVar8 = *(undefined4 **)(_UNK_01076118 + 0x1075f0c);
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x80);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0107611c + 0x1075f2c),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x80) = uVar4;
    thunk_FUN_00ec5080();
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x88);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01076120 + 0x1075f84),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x88) = uVar4;
    thunk_FUN_00ec5080();
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x94);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01076124 + 0x1075fdc),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x94) = uVar4;
    thunk_FUN_00ec5080();
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01076128 + 0x107601c));
    System_Action_Int32Enum__bool____ctor_1f185a4
              (uVar4,param_1,**(undefined4 **)(_UNK_0107612c + 0x107603c),0);
    uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                      (uVar6,uVar4,**(undefined4 **)(_UNK_01076130 + 0x1076054));
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar4;
    thunk_FUN_00ec5080();
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x74);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01076134 + 0x107609c),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
    puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x74);
    *puVar8 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

