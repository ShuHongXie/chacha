for (int i = 1; i < len; i++)
  {
    int j = i - 1;
    int curr = arr[i];
    while (j >= 0 && arr[j] > curr)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = curr;
  }