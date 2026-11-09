/* IL2CPP: Rotatelab.Extensions$$Shuffle<object>
System_Collections_Generic_List_T__o* Rotatelab_Extensions__Shuffle_object_ (System_Collections_Generic_List_T__o* list, const MethodInfo_1488A20* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Shuffle<object>
   System_Collections_Generic_List_T__o* Rotatelab_Extensions__Shuffle_object_
   (System_Collections_Generic_List_T__o* list, const MethodInfo_1488A20* method); */

int * Rotatelab_Extensions__Shuffle_object__1488a20(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_2 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01498adc + 0x1498a44)), *(int *)(param_2 + 0x1c) == 0)) {
    FUN_00efd7c4(param_2);
  }
  if (*(int *)(**(int **)(_UNK_01498ae0 + 0x1498a64) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__Shuffle_object__14886b0
            (param_1,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4));
  iVar1 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  piVar2 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*param_1 + 0xb8)) &&
       (piVar2 = param_1,
       *(int *)(*(int *)(*param_1 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1)) {
      piVar2 = (int *)0x0;
    }
  }
  return piVar2;
}

