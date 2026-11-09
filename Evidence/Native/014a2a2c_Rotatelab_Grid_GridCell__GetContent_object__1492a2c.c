/* IL2CPP: Rotatelab.Grid.GridCell$$GetContent<object>
Il2CppObject* Rotatelab_Grid_GridCell__GetContent_object_ (Rotatelab_Grid_GridCell_o __this, const MethodInfo_1492A2C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridCell$$GetContent<object>
   Il2CppObject* Rotatelab_Grid_GridCell__GetContent_object_ (Rotatelab_Grid_GridCell_o __this,
   const MethodInfo_1492A2C* method); */

int * Rotatelab_Grid_GridCell__GetContent_object__1492a2c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piStack_1c;
  
  if ((*(int *)(param_2 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_014a2b0c + 0x14a2a50)), *(int *)(param_2 + 0x1c) == 0)) {
    FUN_00efd7c4(param_2);
  }
  uVar5 = **(undefined4 **)(_UNK_014a2b14 + 0x14a2a7c);
  if (*(int *)(*(int *)(*(int *)(_UNK_014a2b10 + 0x14a2a70) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar1 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar5,0);
  uVar5 = System_Type__GetTypeFromHandle_2b80928(**(undefined4 **)(param_2 + 0x1c),0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x180))(piVar1,uVar5,*(undefined4 *)(*piVar1 + 0x184));
    if (iVar2 != 0) {
      param_1 = (int *)*param_1;
    }
    iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
    if (iVar2 == 0) {
      param_1 = (int *)param_1[1];
    }
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    piVar1 = (int *)0x0;
    piVar4 = piVar1;
    if (param_1 != (int *)0x0) {
      iVar6 = *param_1;
      iVar2 = func_0x00f1f8d4(iVar3,iVar6);
      piVar4 = param_1;
      if ((iVar2 == 0) && (piVar4 = piVar1, (*(ushort *)(iVar6 + 0xbd) & 0x1000) != 0)) {
        if (((*(byte *)(iVar3 + 0xa0) & 0x20) != 0) ||
           (*(char *)(iVar3 + 0x16) == '\x1e' || *(char *)(iVar3 + 0x16) == '\x13')) {
          iVar2 = *(int *)(iVar3 + 0x38);
          if (iVar2 != 0) {
            piVar1 = *(int **)(iVar2 + 0x14);
          }
          if (iVar2 != 0 && piVar1 != (int *)0x0) {
            piStack_1c = (int *)func_0x00f0ac20(param_1,piVar1);
            if (piStack_1c != (int *)0x0) {
              return param_1;
            }
            iVar2 = (*(code *)**(undefined4 **)param_1[2])
                              ((undefined4 *)param_1[2],piVar1,&piStack_1c);
            if (-1 < iVar2) {
              iVar2 = func_0x00f0aca8(param_1,piVar1,piStack_1c);
              if (iVar2 == 0) {
                (**(code **)(*piStack_1c + 8))();
                piStack_1c = (int *)func_0x00f0ac20(param_1,piVar1);
              }
              if (piStack_1c != (int *)0x0) {
                return param_1;
              }
            }
          }
        }
        piVar4 = param_1;
        if (*(int *)(*(int *)(_UNK_00f00cd8 + 0xf00c44) + 8) != iVar3) {
          piVar4 = (int *)0x0;
        }
      }
    }
    return piVar4;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

