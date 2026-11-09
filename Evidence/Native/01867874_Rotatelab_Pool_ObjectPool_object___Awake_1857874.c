/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$Awake
void Rotatelab_Pool_ObjectPool_object___Awake (Rotatelab_Pool_ObjectPool_T__o* __this, const MethodInfo_1857874* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$Awake
   void Rotatelab_Pool_ObjectPool_object___Awake (Rotatelab_Pool_ObjectPool_T__o* __this, const
   MethodInfo_1857874* method); */

void Rotatelab_Pool_ObjectPool_object___Awake_1857874(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_018679cc + 0x1867890);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_018679d0 + 0x18678a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_018679d4 + 0x18678b0));
    *pcVar4 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (0 < iVar6) {
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uStack_30 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    thunk_FUN_00ec5080(&uStack_30,uStack_30);
    uVar1 = uStack_2c;
    uVar3 = uStack_30;
    uStack_28 = CONCAT22(uStack_28._2_2_,0x100);
    uVar2 = uStack_28;
    if (*(int *)(**(int **)(_UNK_018679d8 + 0x1867910) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__InstantiateAsync_object__14d57cc
                      (uVar7,iVar6,uVar3,uVar1,uVar2,0,
                       *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8));
    piVar5 = (int *)(param_1 + 0x24);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
    iVar6 = *piVar5;
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_018679dc + 0x1867984));
    System_Action_object____ctor_1f11414
              (uVar3,param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x10),0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AsyncOperation__add_completed_35fa280(iVar6,uVar3,0);
  }
  return;
}

