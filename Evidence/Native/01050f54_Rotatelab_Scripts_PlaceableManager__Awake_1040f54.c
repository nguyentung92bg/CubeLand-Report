/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$Awake
void Rotatelab_Scripts_PlaceableManager__Awake (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$Awake
   void Rotatelab_Scripts_PlaceableManager__Awake (Rotatelab_Scripts_PlaceableManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__Awake_1040f54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar3 = (char *)(_UNK_01051350 + 0x1050f6c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051354 + 0x1050f80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051358 + 0x1050f8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105135c + 0x1050f98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051360 + 0x1050fa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051364 + 0x1050fb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051368 + 0x1050fbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105136c + 0x1050fc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051370 + 0x1050fd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051374 + 0x1050fe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051378 + 0x1050fec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105137c + 0x1050ff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051380 + 0x1051004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051384 + 0x1051010));
    *pcVar3 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01051388 + 0x1051024));
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0105138c + 0x1051038));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)(param_1 + 100);
  *piVar4 = *(int *)(iVar1 + 0x18);
  thunk_FUN_00ec5080(piVar4);
  piVar7 = *(int **)(_UNK_01051390 + 0x105106c);
  iVar5 = *piVar4;
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__GetVector_35cb1b8
            (&uStack_30,iVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8),0);
  *(undefined8 *)(param_1 + 0x68) = uStack_30;
  *(undefined8 *)(param_1 + 0x70) = uStack_28;
  uVar2 = Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_10413bc
                    (param_1);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar2,0);
  uVar2 = Rotatelab_Scripts_PlaceableManager__TryUseSwordInDocksContinuouslyCoroutine_1041434
                    (param_1);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar2,0);
  uVar2 = Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_10414ac
                    (param_1);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar2,0);
  piVar4 = *(int **)(_UNK_01051394 + 0x1051110);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar8 = *(undefined4 **)(_UNK_01051398 + 0x1051134);
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xa4);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar2,param_1,**(undefined4 **)(_UNK_0105139c + 0x1051154),0);
  puVar9 = *(undefined4 **)(_UNK_010513a0 + 0x1051170);
  uVar2 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar6,uVar2,*puVar9);
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xa4) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xa8);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar2,param_1,**(undefined4 **)(_UNK_010513a4 + 0x10511b4),0);
  uVar2 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar6,uVar2,*puVar9);
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xa8) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xac);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar2,param_1,**(undefined4 **)(_UNK_010513a8 + 0x105120c),0);
  uVar2 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar6,uVar2,*puVar9);
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xac) = uVar2;
  thunk_FUN_00ec5080();
  puVar8 = *(undefined4 **)(_UNK_010513ac + 0x105124c);
  uVar6 = *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0x2c);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010513b0 + 0x105126c),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0x2c) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0x1c);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010513b4 + 0x10512c4),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0x1c) = uVar2;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xc);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010513b8 + 0x105131c),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0xc) = uVar2;
  thunk_FUN_00ec5080();
  return;
}

