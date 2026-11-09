/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$OnInitialSpawnCompleted
void Rotatelab_Pool_ObjectPool_object___OnInitialSpawnCompleted (Rotatelab_Pool_ObjectPool_T__o* __this, UnityEngine_AsyncOperation_o* asyncOp, const MethodInfo_18579E0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$OnInitialSpawnCompleted
   void Rotatelab_Pool_ObjectPool_object___OnInitialSpawnCompleted (Rotatelab_Pool_ObjectPool_T__o*
   __this, UnityEngine_AsyncOperation_o* asyncOp, const MethodInfo_18579E0* method); */

void Rotatelab_Pool_ObjectPool_object___OnInitialSpawnCompleted_18579e0
               (int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = param_1 + 9;
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_AsyncInstantiateOperation_object___get_Result_27909f8
                    (*piVar6,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x14));
  uVar5 = 0;
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar5) {
      *piVar6 = 0;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x10 + uVar5 * 4);
    (**(code **)(*param_1 + 0xe8))(param_1,uVar4,*(undefined4 *)(*param_1 + 0xec));
    if (param_1[8] == 0) break;
    System_Collections_Generic_Stack_object___Push_1b04f08
              (param_1[8],uVar4,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x24));
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

