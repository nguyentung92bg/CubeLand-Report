/* IL2CPP: Rotatelab.Extensions$$Shuffle<object>
System_Object_array* Rotatelab_Extensions__Shuffle_object_ (System_Object_array* list, const MethodInfo_1488AE4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Shuffle<object>
   System_Object_array* Rotatelab_Extensions__Shuffle_object_ (System_Object_array* list, const
   MethodInfo_1488AE4* method); */

int * Rotatelab_Extensions__Shuffle_object__1488ae4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *apiStack_1c [3];
  
  if ((*(int *)(param_2 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01498b74 + 0x1498b08)), *(int *)(param_2 + 0x1c) == 0)) {
    FUN_00efd7c4(param_2);
  }
  if (*(int *)(**(int **)(_UNK_01498b78 + 0x1498b28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__Shuffle_object__14886b0
            (param_1,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4));
  iVar2 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  piVar4 = (int *)0x0;
  piVar3 = piVar4;
  if (param_1 != (int *)0x0) {
    iVar5 = *param_1;
    iVar1 = func_0x00f1f8d4(iVar2,iVar5);
    piVar3 = param_1;
    if ((iVar1 == 0) && (piVar3 = piVar4, (*(ushort *)(iVar5 + 0xbd) & 0x1000) != 0)) {
      if (((*(byte *)(iVar2 + 0xa0) & 0x20) != 0) ||
         (*(char *)(iVar2 + 0x16) == '\x1e' || *(char *)(iVar2 + 0x16) == '\x13')) {
        iVar1 = *(int *)(iVar2 + 0x38);
        if (iVar1 != 0) {
          piVar4 = *(int **)(iVar1 + 0x14);
        }
        if (iVar1 != 0 && piVar4 != (int *)0x0) {
          apiStack_1c[0] = (int *)func_0x00f0ac20(param_1,piVar4);
          if (apiStack_1c[0] != (int *)0x0) {
            return param_1;
          }
          iVar1 = (*(code *)**(undefined4 **)param_1[2])
                            ((undefined4 *)param_1[2],piVar4,apiStack_1c);
          if (-1 < iVar1) {
            iVar1 = func_0x00f0aca8(param_1,piVar4,apiStack_1c[0]);
            if (iVar1 == 0) {
              (**(code **)(*apiStack_1c[0] + 8))();
              apiStack_1c[0] = (int *)func_0x00f0ac20(param_1,piVar4);
            }
            if (apiStack_1c[0] != (int *)0x0) {
              return param_1;
            }
          }
        }
      }
      piVar3 = param_1;
      if (*(int *)(*(int *)(_UNK_00f00cd8 + 0xf00c44) + 8) != iVar2) {
        piVar3 = (int *)0x0;
      }
    }
  }
  return piVar3;
}

