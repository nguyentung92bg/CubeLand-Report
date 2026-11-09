/* IL2CPP: Rotatelab.Scripts.SseDownloadHandler$$ReceiveData
bool Rotatelab_Scripts_SseDownloadHandler__ReceiveData (Rotatelab_Scripts_SseDownloadHandler_o* __this, System_Byte_array* data, int32_t dataLength, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.SseDownloadHandler$$ReceiveData
   bool Rotatelab_Scripts_SseDownloadHandler__ReceiveData (Rotatelab_Scripts_SseDownloadHandler_o*
   __this, System_Byte_array* data, int32_t dataLength, const MethodInfo* method); */

bool Rotatelab_Scripts_SseDownloadHandler__ReceiveData_105c8bc
               (int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (0 < param_3) {
    piVar2 = *(int **)(param_1 + 0xc);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = (**(code **)(*piVar2 + 0x108))
                      (piVar2,param_2,0,param_3,*(undefined4 *)(param_1 + 0x18),0,0,
                       *(undefined4 *)(*piVar2 + 0x10c));
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Text_StringBuilder__Append_2a162e0
              (*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0,uVar1,0);
    Rotatelab_Scripts_SseDownloadHandler__DrainFrames_105c968(param_1);
  }
  return 0 < param_3;
}

