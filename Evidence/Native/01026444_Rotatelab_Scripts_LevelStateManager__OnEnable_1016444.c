/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$OnEnable
void Rotatelab_Scripts_LevelStateManager__OnEnable (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$OnEnable
   void Rotatelab_Scripts_LevelStateManager__OnEnable (Rotatelab_Scripts_LevelStateManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager__OnEnable_1016444(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_010265b0 + 0x1026458);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010265b4 + 0x102646c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010265b8 + 0x1026478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010265bc + 0x1026484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010265c0 + 0x1026490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010265c4 + 0x102649c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010265c8 + 0x10264a8));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010265cc + 0x10264bc);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010265d0 + 0x10264e0));
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_010265d4 + 0x1026500),0)
  ;
  uVar2 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar5,uVar2,**(undefined4 **)(_UNK_010265d8 + 0x1026518));
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8) = uVar2;
  thunk_FUN_00ec5080();
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xc4);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010265dc + 0x1026548));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010265e0 + 0x1026568),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar5,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xc4) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = Rotatelab_Scripts_LevelStateManager__CheckPausedStateRegularlyCoroutine_10165e4(param_1);
  if (iVar1 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar5 = thunk_FUN_00f00cdc();
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar5,uVar2,0);
  }
  else {
    iVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar3 != 0) {
      pcVar4 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar4 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar4 = '\x01';
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar3,iVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar5 = thunk_FUN_00f00cdc();
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar5,uVar2,0);
  }
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar5,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

