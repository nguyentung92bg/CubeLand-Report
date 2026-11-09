/* IL2CPP: Rotatelab.Extensions$$Shuffle<__Il2CppFullySharedGenericType>
System_Collections_Generic_List_T__o* Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, const MethodInfo_148909C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Shuffle<__Il2CppFullySharedGenericType>
   System_Collections_Generic_List_T__o*
   Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType_
   (System_Collections_Generic_List_T__o* list, const MethodInfo_148909C* method); */

int * Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType__148909c
                (undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(int *)(param_2 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01499160 + 0x14990c0)), *(int *)(param_2 + 0x1c) == 0)) {
    FUN_00efd7c4(param_2);
  }
  if (*(int *)(**(int **)(_UNK_01499164 + 0x14990e0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar1 = (int *)(*(code *)**(undefined4 **)(*(int *)(param_2 + 0x1c) + 4))(param_1);
  iVar2 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
       (piVar3 = piVar1,
       *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
      piVar3 = (int *)0x0;
    }
  }
  return piVar3;
}

